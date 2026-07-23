/*
 * XREFs of BiConvertBootEnvironmentDeviceToUnknown @ 0x140897B54
 * Callers:
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140B4CCC4 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, unsigned int *a3)
{
  unsigned int v4; // esi
  _DWORD *Pool2; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // rdi

  v4 = Src[2] + 20;
  if ( Src[2] >= 0xFFFFFFEC )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v8 = 0;
    v9 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v4);
      *v9 = 5;
      memmove(v9 + 5, Src, (unsigned int)Src[2]);
      *a2 = v9;
      *a3 = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
