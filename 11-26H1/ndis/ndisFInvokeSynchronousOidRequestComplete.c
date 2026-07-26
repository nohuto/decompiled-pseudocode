/*
 * XREFs of ndisFInvokeSynchronousOidRequestComplete @ 0x1400CD4D8
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1400237E0 (WPP_RECORDER_SF_qDqd_ea_1400237E0.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeSynchronousOidRequestComplete(
        ULONG_PTR a1,
        ULONG_PTR BugCheckParameter3,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-38h]
  char v11[4]; // [rsp+40h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *a3;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      BugCheckParameter3,
      (int)a3,
      0xEu,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      a1,
      *(_DWORD *)(BugCheckParameter3 + 32),
      BugCheckParameter3,
      *(_DWORD *)v11);
  }
  (*(void (__fastcall **)(_QWORD, ULONG_PTR, unsigned int *, __int64))(v4 + 328))(
    *(_QWORD *)(a1 + 24),
    BugCheckParameter3,
    a3,
    a4);
  result = *a3;
  if ( (_DWORD)result == 259 )
    ndisBugCheckEx(0x26uLL, a1, BugCheckParameter3, 0x103uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *a3;
    return WPP_RECORDER_SF_qD(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xBu,
             0xFu,
             (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
             a1,
             v10);
  }
  return result;
}
