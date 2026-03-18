/*
 * XREFs of ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1400371B8
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036AD8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14003700C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x14006E190 (-ResetAdapterCollection@CTokenManager@@UEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1400A1040 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CAdapterCollection::InternalDiscard(CAdapterCollection *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 != v1 )
  {
    while ( 1 )
    {
      v3 = v1[1];
      if ( *(_QWORD **)v3 != v1 || (v4 = *(_QWORD **)(v3 + 8), *v4 != v3) )
        __fastfail(3u);
      v1[1] = v4;
      *v4 = v1;
      if ( (_QWORD *)v3 == v1 )
        break;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)((v3 - 8) & -(__int64)(v3 != 0)) + 8LL))(
        (v3 - 8) & -(__int64)(v3 != 0),
        -v3);
    }
    ++*((_DWORD *)this + 2);
    *((_DWORD *)this + 1) = 0;
  }
}
