/*
 * XREFs of InternalOpRegionHandler @ 0x14001D360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InternalOpRegionHandler(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64); // rax
  int v7; // edx
  unsigned int v8; // ebx

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64))(a6 + 16)) != 0LL )
  {
    v8 = v6(a1, a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        12,
        (__int64)&WPP_88a6901df60130b0fb02f0148765b5c1_Traceguids,
        v8);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
