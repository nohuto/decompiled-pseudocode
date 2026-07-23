/*
 * XREFs of RtlpQueryRegistryDirect @ 0x180044EB0
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x1800447EC (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x180113F8C (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlpQueryRegistryDirectStringValue @ 0x180121164 (RtlpQueryRegistryDirectStringValue.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(__int64 a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // edx
  void *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  int RegistryDirectStringValue; // eax
  PVOID Atom; // rax
  size_t v14; // r14

  v4 = a3;
  v7 = a1;
  if ( (unsigned int)(a1 - 1) > 1 && (_DWORD)a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v9 = *a4;
    if ( (v9 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v9 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = v7;
        goto LABEL_12;
      }
    }
    else if ( -(int)v9 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_12:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  v10 = 0;
  if ( !(unsigned int)Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline(
                        a1,
                        (unsigned int)a1) )
  {
    if ( v4 > 0xFFFE )
      LOWORD(v4) = -2;
    Atom = (PVOID)*((_QWORD *)a4 + 1);
    if ( Atom )
    {
      if ( (unsigned __int16)v4 > *((_WORD *)a4 + 1) )
        return 3221225507LL;
      v14 = (unsigned __int16)v4;
    }
    else
    {
      v14 = (unsigned __int16)v4;
      Atom = RtlpAllocateAtom((unsigned __int16)v4);
      *((_QWORD *)a4 + 1) = Atom;
      if ( !Atom )
        return 3221225495LL;
      *((_WORD *)a4 + 1) = v4;
    }
    memmove(Atom, a2, v14);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  RegistryDirectStringValue = RtlpQueryRegistryDirectStringValue(a2);
  if ( RegistryDirectStringValue < 0 )
    return (unsigned int)RegistryDirectStringValue;
  return v10;
}
