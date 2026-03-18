/*
 * XREFs of ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14003700C
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036F80 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1400371B8 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14006A624 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 */

char __fastcall CAdapterCollection::UpdateCollection(CAdapterCollection *this, void **a2, void **a3, unsigned int a4)
{
  void **v4; // rdi
  char v7; // bl
  __int64 v9; // r15
  void *v10; // rax
  CAdapterCollection *v11; // r8
  __int64 v12; // rdi
  void *v13; // rax
  __int64 v14; // rsi

  v4 = a2;
  v7 = 1;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)this + 48) = 1;
  if ( *((_DWORD *)this + 1) != a4 )
  {
LABEL_2:
    v7 = 0;
    CAdapterCollection::InternalDiscard(this);
    goto LABEL_3;
  }
  v14 = 0LL;
LABEL_4:
  if ( (unsigned int)v14 < a4 )
  {
    v9 = 0LL;
    v10 = v4[3 * v14];
    v11 = (CAdapterCollection *)*((_QWORD *)this + 3);
    while ( v11 != (CAdapterCollection *)((char *)this + 24) )
    {
      v12 = ((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL);
      if ( v10 == (void *)__PAIR64__(*(_DWORD *)(v12 + 0x1C), *(_DWORD *)(v12 + 0x18)) )
      {
        if ( CAdapter::IsDeviceActive((CAdapter *)(((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)))
          && CAdapter::UpdateRenderFence((CAdapter *)v12, a2[3 * v14 + 1]) >= 0 )
        {
          v13 = *(void **)(v12 + 48);
          v14 = (unsigned int)(v14 + 1);
          v4 = a2;
          a3[v9] = v13;
          goto LABEL_4;
        }
        goto LABEL_2;
      }
      v11 = *(CAdapterCollection **)v11;
      v9 = (unsigned int)(v9 + 1);
    }
    goto LABEL_2;
  }
LABEL_3:
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return v7;
}
