/*
 * XREFs of PoCreateThermalRequest @ 0x1407CE5F0
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PopAssociateThermalRequest @ 0x1407CE88C (PopAssociateThermalRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, _OWORD *a4, int a5)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  int v9; // esi
  __int64 Pool2; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  *a1 = 0LL;
  if ( a2 && a3 && a4 )
  {
    v9 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, &P);
    if ( v9 < 0 )
    {
      v5 = P;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v5 = P;
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v11 = a5;
        *(_QWORD *)(Pool2 + 24) = P;
        v12 = Pool2;
        *(_BYTE *)(Pool2 + 16) = 100;
        v13 = MEMORY[0xFFFFF78000000008];
        v6[6] = MEMORY[0xFFFFF78000000008];
        v6[7] = v13;
        v9 = PopAssociateThermalRequest(v12, a2, v11 >= 0);
        if ( v9 >= 0 )
        {
          *a1 = v6;
          return (unsigned int)v9;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v5 )
    PoDestroyReasonContext(v5);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6C6F4350u);
  return (unsigned int)v9;
}
