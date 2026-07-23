/*
 * XREFs of VfIrpLogRetrieveWmiData @ 0x140C4192C
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140C48E04 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfIrpLogRetrieveWmiData(unsigned int a1, __int64 a2, int *a3, _DWORD *a4, _DWORD *a5, ULONG *a6)
{
  __int64 v6; // rbx
  _OBJECT_NAME_INFORMATION *Pool2; // rsi
  int v10; // ecx
  _QWORD *v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rbp
  _DWORD *v15; // r15
  _WORD *v16; // r14
  NTSTATUS v17; // ebx
  void *v18; // rcx
  unsigned int v19; // r15d
  __int64 v20; // rdi
  _OWORD *v21; // r14
  int v22; // ebp
  ULONG v23; // edi
  int v24; // r12d
  _DWORD *v25; // rsi
  _QWORD *v26; // r14
  _DWORD *v27; // rdx
  _QWORD *v28; // r15
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ebp
  ULONG *v32; // r8
  __int64 v33; // rbx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  int v35; // [rsp+24h] [rbp-64h]
  ULONG Length[2]; // [rsp+28h] [rbp-60h]
  _QWORD *v37; // [rsp+30h] [rbp-58h]
  ULONG *v38; // [rsp+38h] [rbp-50h]
  _DWORD *v39; // [rsp+40h] [rbp-48h]
  __int64 v40; // [rsp+48h] [rbp-40h]

  v6 = a1;
  ReturnLength = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)Length = 16LL;
  Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 0x10uLL, 0x74496656u);
  if ( !Pool2 )
    return 3221225626LL;
  v40 = 3 * v6;
  v10 = 0;
  v11 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v6);
  v12 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 != v11 )
  {
    v13 = (_QWORD *)*v11;
    do
    {
      ++v10;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v11 );
  }
  v37 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v6);
  v14 = (unsigned int)(8 * v10 + 60 + 4 * v10);
  v15 = (_DWORD *)(a2 + (unsigned int)(8 * v10 + 60));
  v35 = 8 * v10 + 60;
  v16 = (_WORD *)(a2 + v14);
  v17 = 0;
  v38 = (ULONG *)(a2 + 60);
  while ( v12 != v11 )
  {
    v17 = ObQueryNameString((PVOID)*(v12 - 1), Pool2, Length[0], &ReturnLength);
    if ( v17 == -1073741820 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 0x74496656u);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v18 = (void *)*(v12 - 1);
      *(_QWORD *)Length = ReturnLength;
      v17 = ObQueryNameString(v18, Pool2, ReturnLength, &ReturnLength);
    }
    if ( v17 < 0 )
      break;
    if ( Pool2->Name.Length )
    {
      if ( a2 )
        *v15 = v14;
      v39 = v15 + 1;
      v19 = Pool2->Name.Length + 18;
      v20 = v19 >> 1;
      if ( a2 )
        *v16 = v19;
      v21 = v16 + 1;
      v22 = v14 + 2;
      if ( a2 )
      {
        *v21 = *(_OWORD *)L"VERIFIER";
        memmove(v21 + 1, Pool2->Name.Buffer, Pool2->Name.Length);
        *((_WORD *)v21 + (unsigned int)(v20 - 1)) = 0;
      }
      LODWORD(v14) = v19 + v22;
      v16 = (_WORD *)v21 + v20;
      v15 = v39;
    }
    else
    {
      *((_DWORD *)v12 + 4) |= 2u;
    }
    v37 = (_QWORD *)*v37;
    v12 = (_QWORD *)*v37;
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v23 = (v14 + 7) & 0xFFFFFFF8;
  v24 = 0;
  v25 = (_DWORD *)(a2 + v23);
  Length[0] = v23;
  v26 = (_QWORD *)(ViIrpLogDatabase + 8 * (v40 + 1));
  v27 = (_DWORD *)*v26;
  v28 = v26;
  while ( v27 != (_DWORD *)v26 )
  {
    v29 = v27[4];
    if ( (v29 & 2) == 0 )
    {
      ++v24;
      v30 = (unsigned int)v27[((v29 & 1) == 0) + 6];
      v31 = 40 * v30;
      if ( a2 )
      {
        v32 = v38;
        *v38 = v23;
        v32[1] = v31 + 8;
        *v25 = v27[5];
        v25[1] = v30;
        v33 = 40 * v30;
        v38 = v32 + 2;
        memmove(v25 + 2, v27 + 8, 40 * v30);
        v25 = (_DWORD *)((char *)v25 + v33 + 8);
      }
      v23 += v31 + 8;
    }
    v28 = (_QWORD *)*v28;
    v27 = (_DWORD *)*v28;
  }
  *a3 = v35;
  *a4 = v24;
  *a5 = Length[0];
  *a6 = v23;
  return 0LL;
}
