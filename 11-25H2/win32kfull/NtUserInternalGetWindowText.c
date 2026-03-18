/*
 * XREFs of NtUserInternalGetWindowText @ 0x1401712B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rax
  ULONG_PTR v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // r14d
  ULONG_PTR v9; // r8
  __int64 v10; // rax
  unsigned int v11; // r10d
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rcx
  ULONG_PTR v15; // r10
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rbx
  void *Src[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  EnterLeaveCritShared::EnterLeaveCritShared(&v25, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  v8 = 0;
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 184);
    if ( v9 )
    {
      Src[1] = *(void **)(v5 + 184);
      v10 = *(_QWORD *)(v5 + 40);
      v11 = *(_DWORD *)(v10 + 184);
      Src[0] = (void *)v11;
      v12 = *(_DWORD *)(v10 + 188);
      HIDWORD(Src[0]) = v12;
      v13 = *(_QWORD *)(v7 + 24);
      if ( (v11 & 1) != 0 || (v12 & 1) != 0 || v11 >= (v12 & 0x7FFFFFFFu) )
        KeBugCheckEx(0x164u, 7uLL, (ULONG_PTR)Src, *(_QWORD *)(v13 + 136), *(unsigned int *)(v13 + 144));
      v14 = v12 & 0x7FFFFFFF;
      v15 = v9 + v14;
      if ( v9 + v14 < v9 )
        KeBugCheckEx(0x164u, 6uLL, v9, *(_QWORD *)(v13 + 136), *(unsigned int *)(v13 + 144));
      v6 = *(_QWORD *)(v13 + 136);
      if ( v9 < v6 || (v16 = v6 + *(unsigned int *)(v13 + 144), v9 >= v16) )
        KeBugCheckEx(0x164u, 6uLL, v9, v6, *(unsigned int *)(v13 + 144));
      v17 = v15 - 1;
      if ( v15 - 1 < v6 || v17 >= v16 )
        KeBugCheckEx(0x164u, 6uLL, v17, v6, *(unsigned int *)(v13 + 144));
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 184LL) )
      {
        *(_OWORD *)Src = 0LL;
        Src[1] = *(void **)(v7 + 184);
        v18 = *(_QWORD *)(v7 + 40);
        v25 = *(_DWORD *)(v18 + 184);
        LODWORD(Src[0]) = v25;
        HIDWORD(Src[0]) = *(_DWORD *)(v18 + 188) ^ (*(_DWORD *)(v18 + 188) & 0x7FFFFFFF ^ *(_DWORD *)(v18 + 188)) & 0x7FFFFFFF;
        v19 = v25 >> 1;
        if ( (unsigned int)v19 >= (int)v3 - 1 )
          v19 = (unsigned int)(v3 - 1);
        v20 = v19;
        v21 = v19;
        memmove(a2, Src[1], 2 * v19);
        a2[v21] = 0;
        v8 = v20;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
