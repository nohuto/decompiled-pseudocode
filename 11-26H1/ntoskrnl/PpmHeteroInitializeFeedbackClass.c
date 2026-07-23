/*
 * XREFs of PpmHeteroInitializeFeedbackClass @ 0x14060E428
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x14060E1CC (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeFeedbackClass(_QWORD *a1)
{
  _DWORD *Pool2; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rax
  void *v6; // rcx
  unsigned int v7; // edi
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  if ( a1[4428] )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  a1[4428] = Pool2;
  if ( !Pool2 )
    goto LABEL_6;
  *Pool2 = *(_DWORD *)(PpmHeteroCapability + 4);
  v3 = (_DWORD *)ExAllocatePool2(0x40uLL);
  a1[4429] = v3;
  if ( !v3 )
    goto LABEL_6;
  *v3 = *(_DWORD *)(PpmHeteroCapability + 4);
  v4 = (_DWORD *)ExAllocatePool2(0x40uLL);
  a1[4430] = v4;
  if ( v4 && (*v4 = *(_DWORD *)(PpmHeteroCapability + 4), v5 = ExAllocatePool2(0x40uLL), (a1[4432] = v5) != 0LL) )
  {
    return 0;
  }
  else
  {
LABEL_6:
    v6 = (void *)a1[4428];
    v7 = -1073741670;
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x704D5050u);
      a1[4428] = 0LL;
    }
    v8 = (void *)a1[4429];
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x704D5050u);
      a1[4429] = 0LL;
    }
    v9 = (void *)a1[4430];
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x704D5050u);
      a1[4430] = 0LL;
    }
    v10 = (void *)a1[4432];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x704D5050u);
      a1[4432] = 0LL;
    }
  }
  return v7;
}
