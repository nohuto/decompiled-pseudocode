/*
 * XREFs of RtlpQueryRegistryDirect @ 0x140A109F8
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x140A10684 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x1404ED38C (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpQueryRegistryDirectStringValue @ 0x14080AAE0 (RtlpQueryRegistryDirectStringValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  unsigned __int64 v10; // rax
  void *Pool2; // rax
  unsigned int v12; // esi
  int RegistryDirectStringValue; // eax
  size_t v14; // r14

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v10 = *a4;
    if ( (v10 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v10 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = a1;
        goto LABEL_7;
      }
    }
    else if ( -(int)v10 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_7:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  v12 = 0;
  if ( !(unsigned int)Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 > 0xFFFE )
      LOWORD(v4) = -2;
    Pool2 = (void *)*((_QWORD *)a4 + 1);
    if ( Pool2 )
    {
      if ( (unsigned __int16)v4 > *((_WORD *)a4 + 1) )
        return 3221225507LL;
      v14 = (unsigned __int16)v4;
    }
    else
    {
      v14 = (unsigned __int16)v4;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      *((_QWORD *)a4 + 1) = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      *((_WORD *)a4 + 1) = v4;
    }
    memmove(Pool2, a2, v14);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  RegistryDirectStringValue = RtlpQueryRegistryDirectStringValue(a2, v4, (__int64)a4);
  if ( RegistryDirectStringValue < 0 )
    return (unsigned int)RegistryDirectStringValue;
  return v12;
}
