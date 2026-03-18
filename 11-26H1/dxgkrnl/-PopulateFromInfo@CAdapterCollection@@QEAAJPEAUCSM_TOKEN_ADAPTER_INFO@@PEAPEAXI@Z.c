/*
 * XREFs of ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036AD8
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036F80 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x140036BC4 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1400371B8 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 */

__int64 __fastcall CAdapterCollection::PopulateFromInfo(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  int v7; // ebx
  _QWORD *v8; // rbp
  __int64 i; // rsi
  unsigned int v10; // edx
  struct CAdapter *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  struct CAdapter *v15; // [rsp+60h] [rbp+8h] BYREF
  struct CSM_TOKEN_ADAPTER_INFO *v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  v7 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v8 = (_QWORD *)((char *)this + 24);
  *((_BYTE *)this + 48) = 1;
  if ( (_QWORD *)*v8 != v8 )
    CAdapterCollection::InternalDiscard(this);
  *((_DWORD *)this + 1) = a4;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v10 = *((_DWORD *)this + 2);
    v15 = 0LL;
    v7 = CAdapter::Create((struct CSM_TOKEN_ADAPTER_INFO *)((char *)v16 + 24 * i), v10, &v15);
    if ( v7 < 0 )
    {
      CAdapterCollection::InternalDiscard(this);
      break;
    }
    v11 = v15;
    if ( v15 )
      v12 = (_QWORD *)((char *)v15 + 8);
    else
      v12 = 0LL;
    v13 = (_QWORD *)*((_QWORD *)this + 4);
    if ( (_QWORD *)*v13 != v8 )
      __fastfail(3u);
    *v12 = v8;
    v12[1] = v13;
    *v13 = v12;
    *((_QWORD *)this + 4) = v12;
    a3[i] = (void *)*((_QWORD *)v11 + 6);
  }
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return (unsigned int)v7;
}
