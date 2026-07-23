/*
 * XREFs of DifDeregisterPlugin @ 0x14064F24C
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 * Callees:
 *     ViUnbindDifThunk @ 0x1406451A0 (ViUnbindDifThunk.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall DifDeregisterPlugin(_DWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rdx
  int v3; // eax
  __int128 *v4; // rbx
  __int128 *v5; // r15
  __int128 *v6; // r13
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int128 *v15; // rax
  __int128 **v16; // rcx
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rbx
  void *v20; // rcx

  if ( (unsigned int)a1 < 0x40 )
  {
    v1 = (unsigned int)a1;
    v2 = (unsigned __int8)a1 & 0x1F;
    v3 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)(unsigned int)a1 >> 5));
    if ( _bittest(&v3, v2) )
    {
      v4 = (__int128 *)DifAPIThunkContextHead;
      while ( v4 != &DifAPIThunkContextHead )
      {
        v5 = v4 - 1;
        v6 = v4;
        v7 = v4 + 1;
        v8 = (_QWORD *)*v7;
        while ( v8 != v7 )
        {
          a1 = v8 - 2;
          v9 = v8;
          v8 = (_QWORD *)*v8;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v8[1] != v9 )
              goto LABEL_35;
            v10 = (_QWORD *)v9[1];
            if ( (_QWORD *)*v10 != v9 )
              goto LABEL_35;
            *v10 = v8;
            v8[1] = v10;
            *v9 = 0LL;
            v9[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v11 = v5 + 3;
        v12 = (_QWORD *)*((_QWORD *)v5 + 6);
        while ( v12 != v11 )
        {
          a1 = v12 - 2;
          v13 = v12;
          v12 = (_QWORD *)*v12;
          if ( *a1 == (_DWORD)v1 )
          {
            if ( (_QWORD *)v12[1] != v13 )
              goto LABEL_35;
            v14 = (_QWORD *)v13[1];
            if ( (_QWORD *)*v14 != v13 )
              goto LABEL_35;
            *v14 = v12;
            v12[1] = v14;
            *v13 = 0LL;
            v13[1] = 0LL;
            ExFreePoolWithTag(a1, 0x4E666944u);
          }
        }
        v15 = v4;
        v4 = *(__int128 **)v4;
        if ( (_QWORD *)*v7 == v7 && (_QWORD *)*v11 == v11 )
        {
          if ( *((__int128 **)v4 + 1) != v15 || (v16 = (__int128 **)*((_QWORD *)v15 + 1), *v16 != v15) )
LABEL_35:
            __fastfail(3u);
          *v16 = v4;
          *((_QWORD *)v4 + 1) = v16;
          *(_QWORD *)v6 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          if ( !ViUnbindDifThunk((__int64)&VfDifThunks, *((_DWORD *)v5 + 2))
            && !ViUnbindDifThunk((__int64)&VfPoolThunks, v17) )
          {
            ViUnbindDifThunk((__int64)&VfRegularThunks, v18);
          }
          if ( *(_QWORD *)v5 )
          {
            ExFreePoolWithTag(*(PVOID *)v5, 0x4E666944u);
            *(_QWORD *)v5 = 0LL;
          }
          ExFreePoolWithTag(v5, 0x4E666944u);
        }
      }
      v19 = (_QWORD *)DifPluginSettings[v1];
      if ( v19 )
      {
        if ( v19[1] )
          guard_dispatch_icall_no_overrides(a1, v2);
        v20 = (void *)v19[3];
        if ( v20 )
        {
          ExFreePoolWithTag(v20, 0x4E666944u);
          v19[3] = 0LL;
        }
        ExFreePoolWithTag(v19, 0x4E666944u);
        DifPluginSettings[v1] = 0LL;
      }
      DifPluginStates[v1] = 0;
    }
  }
}
