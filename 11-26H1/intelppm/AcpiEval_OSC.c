/*
 * XREFs of AcpiEval_OSC @ 0x140042F0C
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     memcpy_s @ 0x140006038 (memcpy_s.c)
 *     AcpiEvaluateMethod @ 0x1400434F4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_OSC(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // eax
  unsigned __int16 v8; // r15
  unsigned int v9; // ebp
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0;
  v6 = a2[5];
  if ( !v6 || v6 > 5 )
  {
    v12 = -1073741823;
    goto LABEL_14;
  }
  v8 = 4 * v6;
  v9 = 4 * v6 + 64;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v9, 1919119952LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
LABEL_14:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10000u);
    return (unsigned int)v12;
  }
  *((_DWORD *)Pool2 + 2) = v9;
  *(_DWORD *)Pool2 = 1130980673;
  *((_DWORD *)Pool2 + 1) = 1129533279;
  *((_DWORD *)Pool2 + 3) = 4;
  *((_DWORD *)Pool2 + 4) = 1048578;
  memcpy_s(Pool2 + 10, 0x10uLL, a2, 0x10uLL);
  v13 = 4LL;
  if ( v11[9] >= 4u )
    v13 = v11[9];
  *(_DWORD *)((char *)v11 + v13 + 20) = 0x40000;
  *(_DWORD *)((char *)v11 + v13 + 24) = a2[4];
  *(_DWORD *)((char *)v11 + v13 + 28) = 0x40000;
  *(_DWORD *)((char *)v11 + v13 + 32) = a2[5];
  *(unsigned __int16 *)((char *)v11 + v13 + 36) = 2;
  *(unsigned __int16 *)((char *)v11 + v13 + 38) = v8;
  memcpy_s((char *)v11 + v13 + 40, v8, a2 + 6, v8);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10000u);
  v15 = 0LL;
  v12 = AcpiEvaluateMethod(a1, 0, (_DWORD)v11, (unsigned int)&v15, (__int64)&v16);
  if ( v12 >= 0 && v15 && a4 )
    *a4 = v15 + 16;
  ExFreePoolWithTag(v11, (ULONG)0);
  if ( v12 < 0 )
    goto LABEL_14;
  return (unsigned int)v12;
}
