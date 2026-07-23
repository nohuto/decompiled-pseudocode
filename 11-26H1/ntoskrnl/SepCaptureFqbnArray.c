/*
 * XREFs of SepCaptureFqbnArray @ 0x1408195A0
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureFqbnArray(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v7; // rbx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v9; // rsi
  unsigned int v11; // edx
  __int64 i; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  unsigned int v15; // ebx
  char *v16; // r14
  __int64 j; // rbx
  void *v18; // rdx

  v7 = 24LL * a2;
  if ( v7 > 0xFFFFFFFF )
    return 3221225621LL;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v7 && ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(Pool2, Src, (unsigned int)v7);
  if ( (((unsigned int)v7 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v7 )
  {
LABEL_21:
    v15 = -1073741675;
    goto LABEL_22;
  }
  v11 = (v7 + 1) & 0xFFFFFFFE;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( v11 + v9[12 * i + 4] < v11 )
      goto LABEL_21;
    v11 += v9[12 * i + 4];
  }
  v13 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v14 = v13;
  if ( !v13 )
  {
    v15 = -1073741670;
LABEL_22:
    ExFreePoolWithTag(v9, 0);
    return v15;
  }
  memmove(v13, v9, v7);
  v16 = (char *)(((unsigned __int64)&v14[v7 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0LL; (unsigned int)j < a2; j = (unsigned int)(j + 1) )
  {
    v18 = *(void **)&v9[12 * j + 8];
    if ( v9[12 * j + 4] )
    {
      if ( ((unsigned __int8)v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    RtlCopyFromUser(v16, v18, v9[12 * j + 4]);
    v14[3 * j + 2] = v16;
    v16 += v9[12 * j + 4];
  }
  ExFreePoolWithTag(v9, 0);
  *a4 = v14;
  return 0LL;
}
