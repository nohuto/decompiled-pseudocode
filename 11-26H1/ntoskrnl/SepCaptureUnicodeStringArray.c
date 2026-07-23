/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x140925834
 * Callers:
 *     NtQuerySecurityPolicy @ 0x140815400 (NtQuerySecurityPolicy.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureUnicodeStringStructures @ 0x140A86AF0 (SeCaptureUnicodeStringStructures.c)
 *     SepReleaseUnicodeStringArray @ 0x140A8BA1C (SepReleaseUnicodeStringArray.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned __int16 *v11; // r14
  _QWORD *Pool2; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  char *v15; // r13
  unsigned int i; // ebx
  void *v17; // rdx
  unsigned int v18; // ebx
  void *Src; // [rsp+80h] [rbp+8h] BYREF
  char v20; // [rsp+90h] [rbp+18h]
  _QWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v4 = a3;
  v5 = a2;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( (_BYTE)a3 )
  {
    result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
    if ( (int)result < 0 )
      return result;
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF
      || (((unsigned int)v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v8 )
    {
      LOBYTE(v7) = v4;
      SepReleaseUnicodeStringArray(Src, v7);
      return 3221225621LL;
    }
    v9 = (v8 + 1) & 0xFFFFFFFE;
    v10 = 0LL;
    v11 = (unsigned __int16 *)Src;
    while ( (unsigned int)v10 < (unsigned int)v5 )
    {
      if ( v9 + *((unsigned __int16 *)Src + 8 * (unsigned int)v10) < v9 )
      {
        v18 = -1073741675;
LABEL_24:
        LOBYTE(v10) = v4;
        SepReleaseUnicodeStringArray(v11, v10);
        return v18;
      }
      v9 += *((unsigned __int16 *)Src + 8 * (unsigned int)v10);
      v10 = (unsigned int)(v10 + 1);
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      v18 = -1073741670;
      goto LABEL_24;
    }
    memmove(Pool2, v11, 16 * v5);
    v15 = (char *)(((unsigned __int64)&v13[(unsigned __int64)v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    for ( i = 0; i < (unsigned int)v5; ++i )
    {
      v17 = *(void **)&v11[8 * i + 4];
      if ( v11[8 * i] )
      {
        if ( ((unsigned __int8)v17 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      RtlCopyFromUser(v15, v17, v11[8 * i]);
      v13[2 * i + 1] = v15;
      WORD1(v13[2 * i]) = v13[2 * i];
      v15 += v11[8 * i];
    }
    LOBYTE(v14) = v4;
    SepReleaseUnicodeStringArray(v11, v14);
    *v21 = v13;
  }
  else
  {
    *a4 = a1;
  }
  return 0LL;
}
