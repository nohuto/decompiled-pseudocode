/*
 * XREFs of CiLookupTask @ 0x14000E670
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x14000E4A0 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     WPP_SF_Sd @ 0x140004634 (WPP_SF_Sd.c)
 *     CiTaskLocate @ 0x14000E750 (CiTaskLocate.c)
 */

__int64 __fastcall CiLookupTask(wchar_t *a1, wchar_t *a2, __int64 a3, char a4, _QWORD *a5)
{
  const wchar_t *v7; // rdi
  int v8; // ebx

  a1[63] = 0;
  v7 = a1;
  v8 = CiTaskLocate(a1);
  if ( v8 < 0 || a4 && (a2[63] = 0, v7 = a2, v8 = CiTaskLocate(a2), v8 < 0) )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_Sd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xBu,
        (__int64)&WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids,
        v7,
        v8);
  }
  else
  {
    *a5 = 0LL;
  }
  return (unsigned int)v8;
}
