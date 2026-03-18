/*
 * XREFs of ReferenceClass @ 0x1401A4040
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1400B398C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B4960 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1400B49FC (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1400B4B48 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1401A4314 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1401A4340 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1401C8E48 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  struct tagDESKTOP *v2; // rsi
  size_t v5; // r12
  char *i; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  __int16 v15; // r9
  void **v16; // r14
  __int64 v17; // rcx
  const void *v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-30h]

  v2 = *(struct tagDESKTOP **)(a2 + 24);
  v5 = 0LL;
  if ( *(struct tagDESKTOP **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  else
  {
    for ( i = *(char **)(a1 + 64); i; i = *(char **)i )
    {
      if ( *((struct tagDESKTOP **)i + 4) == v2 )
        goto LABEL_21;
    }
    v8 = ClassAlloc(*(struct tagDESKTOP **)(a2 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
    i = (char *)v8;
    if ( v8 )
    {
      v9 = *(void **)(v8 + 8);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(v8 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(v8 + 80) = *(_OWORD *)(a1 + 80);
      *(_QWORD *)(v8 + 96) = *(_QWORD *)(a1 + 96);
      memmove(v9, *(const void **)(a1 + 8), *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 88LL);
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v13) );
      v14 = ClassAllocString(v2, (unsigned int)(v13 + 1), v10, v11);
      if ( v14 )
      {
        v15 = 0;
        v16 = (void **)(i + 104);
        if ( v2 )
        {
          tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(i + 104, v14);
        }
        else
        {
          *v16 = (void *)v14;
          *(_QWORD *)(*((_QWORD *)i + 1) + 48LL) = 0LL;
        }
        v17 = *(_QWORD *)(a1 + 96);
        if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_36;
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(v17 + 2 * v22) != v15 );
        v5 = 2 * v22 + 2;
        v23 = Win32AllocPoolWithQuotaZInit(v5, 2020897621LL);
        if ( (v23 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          v12 = v23;
        *(_QWORD *)(*((_QWORD *)i + 1) + 40LL) = v12;
        *((_QWORD *)i + 12) = v23;
        if ( v23 )
        {
LABEL_36:
          if ( InitLookAsideRef<tagCLS>((__int64)i) )
          {
            *((_QWORD *)i + 4) = 0LL;
            LockObjectAssignment(i + 32, v2);
            *(_QWORD *)i = *(_QWORD *)(a1 + 64);
            *((_QWORD *)i + 8) = 0LL;
            v18 = *(const void **)(a1 + 104);
            *(_QWORD *)(a1 + 64) = i;
            memmove(*v16, v18, v13 + 1);
            v19 = *((_QWORD *)i + 12);
            if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              memmove((void *)v19, *(const void **)(a1 + 96), v5);
            *((_QWORD *)i + 11) = 0LL;
            *(_QWORD *)(*((_QWORD *)i + 1) + 56LL) = 0LL;
            *((_QWORD *)i + 14) = 0LL;
            *((_QWORD *)i + 10) = 0LL;
            v24 = i + 80;
            v25 = *(_QWORD **)(a1 + 80);
            HMAssignmentLock(&v24, 0LL);
            v20 = *(_QWORD **)(a1 + 112);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            *(_QWORD *)(*((_QWORD *)i + 1) + 56LL) = v21;
            v25 = v20;
            v24 = i + 112;
            HMAssignmentLock(&v24, 0LL);
            v25 = *(_QWORD **)(a1 + 88);
            v24 = i + 88;
            HMAssignmentLock(&v24, 0LL);
            *((_QWORD *)i + 6) = 0LL;
            *((_DWORD *)i + 18) = 0;
LABEL_21:
            ++*(_DWORD *)(a1 + 72);
            ++*((_DWORD *)i + 18);
            tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, i);
            return 1LL;
          }
          Win32FreePool(*((void **)i + 12));
        }
        ClassFree(v2, (char *)*v16);
      }
      ClassFree((PVOID *)v2, (PVOID *)i);
    }
    return 0LL;
  }
}
