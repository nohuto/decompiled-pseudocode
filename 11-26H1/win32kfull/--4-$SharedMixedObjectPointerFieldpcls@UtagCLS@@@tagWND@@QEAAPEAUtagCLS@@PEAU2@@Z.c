/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x140151A04
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(*(a1 - 12) + 128LL) = v2;
  result = a2;
  *a1 = a2;
  return result;
}
