/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180057CE8
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18005795C (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180057E7C (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180057F90 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  int updated; // eax
  int v9; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14[39]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v11);
    if ( v5 < 0 )
      break;
    v6 = v11;
    v13 = v11;
    memset_0(v14, 0, 0x130uLL);
    v7 = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x97u, 0LL);
      goto LABEL_9;
    }
    v14[0] = v12;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v13);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x9Au, 0LL);
      goto LABEL_9;
    }
    v9 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 352, &v13);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x9Cu, 0LL);
      goto LABEL_9;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v5 = 0;
LABEL_9:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
  return (unsigned int)v5;
}
