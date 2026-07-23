/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140AF2C7C
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x1404CC824 (SepCaptureTokenSecurityOperations.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140AC56D8 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(__int64 a1, char a2, PVOID **a3)
{
  _DWORD *ULong64FromUser; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int ULongFromUser; // r14d
  __int64 result; // rax
  int v12; // r9d
  int v13; // ebx
  PVOID *Pool2; // rax
  PVOID v15; // rcx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  PVOID v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  P = 0LL;
  *a3 = 0LL;
  if ( !a2 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
      return 3221225485LL;
    *a3 = (PVOID *)a1;
    return 0LL;
  }
  if ( (a1 & 3) != 0 )
    goto LABEL_11;
  ULong64FromUser = (_DWORD *)RtlReadULong64FromUser((volatile void *)(a1 + 8));
  v7 = ULong64FromUser;
  if ( !ULong64FromUser )
    return 3221225485LL;
  ProbeForRead(ULong64FromUser, 1uLL, 4u);
  v8 = RtlReadULong64FromUser((volatile void *)a1);
  v9 = v8;
  ULongFromUser = 0;
  if ( v8 )
  {
    if ( (v8 & 3) == 0 )
    {
      ULongFromUser = RtlReadULongFromUser((unsigned int *)(v8 + 4));
      goto LABEL_7;
    }
LABEL_11:
    ExRaiseDatatypeMisalignment();
  }
  if ( *v7 != 1 )
    return 3221225485LL;
LABEL_7:
  result = SepCaptureTokenSecurityOperations((__int64)v7, ULongFromUser, a2, (__int64 *)&P);
  if ( (int)result >= 0 )
  {
    if ( v9
      && (LOBYTE(v12) = a2,
          v13 = SepCaptureTokenSecurityAttributesInformation(v9, (_DWORD)v7, ULongFromUser, v12, 1, (__int64)&v17),
          v13 < 0) )
    {
      v17 = 0LL;
      v15 = P;
    }
    else
    {
      Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
      v15 = P;
      if ( !Pool2 )
      {
        v13 = -1073741801;
        goto LABEL_25;
      }
      Pool2[1] = P;
      *Pool2 = v17;
      *a3 = Pool2;
      v13 = 0;
    }
    if ( v13 >= 0 )
      return (unsigned int)v13;
LABEL_25:
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v17 )
      SepFreeCapturedTokenSecurityAttributesInformation(v17);
    return (unsigned int)v13;
  }
  return result;
}
