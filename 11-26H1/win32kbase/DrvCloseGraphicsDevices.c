/*
 * XREFs of DrvCloseGraphicsDevices @ 0x14016E180
 * Callers:
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x14016E200 (bSetDeviceSessionUsage.c)
 */

LONG_PTR __fastcall DrvCloseGraphicsDevices(__int64 a1)
{
  int v1; // ebx
  LONG_PTR result; // rax
  __int64 i; // rbx

  v1 = a1;
  result = *(_QWORD *)(W32GetSessionState(a1) + 88);
  for ( i = *(_QWORD *)((v1 != 0 ? 8 : 0) + result + 1272); i; i = *(_QWORD *)(i + 128) )
  {
    if ( *(_QWORD *)(i + 224) )
    {
      bSetDeviceSessionUsage(i, 0LL);
      result = ObfDereferenceObject(*(PVOID *)(i + 224));
      *(_QWORD *)(i + 136) = 0LL;
      *(_QWORD *)(i + 224) = 0LL;
    }
  }
  return result;
}
