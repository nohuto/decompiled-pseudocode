/*
 * XREFs of DifAddPerDriverDataForPlugins @ 0x14064E688
 * Callers:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifAddPerDriverDataForPlugins(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  _DWORD *v4; // rcx
  _QWORD *Pool2; // r14
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  void *v12; // rcx

  v1 = 0LL;
  v3 = 0;
  while ( (unsigned int)v1 < 0x40 )
  {
    v4 = (_DWORD *)DifPluginSettings[v1];
    if ( v4 && *v4 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        goto LABEL_11;
      v6 = ExAllocatePool2(0x40uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0x4E666944u);
LABEL_11:
        v3 = -1073741801;
        while ( 1 )
        {
          v9 = *(_QWORD **)a1;
          if ( *(_QWORD *)a1 == a1 )
            return v3;
          if ( v9[1] != a1 )
            goto LABEL_19;
          v10 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) != v9 )
            goto LABEL_19;
          v11 = v9 - 2;
          *(_QWORD *)a1 = v10;
          *(_QWORD *)(v10 + 8) = a1;
          if ( v9 != (_QWORD *)16 )
          {
            v12 = (void *)v11[1];
            if ( v12 )
            {
              ExFreePoolWithTag(v12, 0x4E666944u);
              v11[1] = 0LL;
            }
            ExFreePoolWithTag(v11, 0x4E666944u);
          }
        }
      }
      Pool2[1] = v6;
      v7 = Pool2 + 2;
      *(_DWORD *)Pool2 = v1;
      v8 = *(_QWORD **)(a1 + 8);
      if ( *v8 != a1 )
LABEL_19:
        __fastfail(3u);
      *v7 = a1;
      Pool2[3] = v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 8) = v7;
    }
    v1 = (unsigned int)(v1 + 1);
  }
  return v3;
}
