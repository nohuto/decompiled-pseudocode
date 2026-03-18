/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x140227DE8
 * Callers:
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1401CB8D8 (SetDisplayAffinity.c)
 * Callees:
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x140228BE4 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1402673AC (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1402DDFCC (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // r14d
  struct tagBWL *v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 *i; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  __int64 v16; // rbx
  struct tagWND **v17; // rsi
  char *v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-8h]
  int v21; // [rsp+2Ch] [rbp-4h]
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF

  v3 = 0;
  v5 = BuildHwndList(a1, 1LL, 0LL, 1);
  if ( v5 )
  {
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Grow(&v19) >= 0 )
    {
      v7 = v20;
      v8 = 0LL;
      *(_QWORD *)&v19[8 * v20] = a1;
      v6 = v7 + 1;
      v9 = *((_QWORD *)a1 + 2);
      v20 = v6;
      v10 = *(_QWORD *)(v9 + 464);
      if ( a1 == *(struct tagWND **)(v9 + 1584) )
      {
        v11 = *(_QWORD *)(v9 + 1592);
        if ( v11 )
          v8 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL);
      }
      for ( i = (__int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        LOBYTE(v6) = 1;
        v13 = HMValidateHandleNoSecure(*i, v6);
        v22 = v13;
        v6 = v13;
        if ( v13 && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 27LL) & 0x20) != 0 )
        {
          if ( (v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 464LL), (a2 & 1) != 0) && v14 != v10 && v14 != v8
            || (int)CDynamicArray<tagWND *,2003858261>::Add(&v19, &v22) < 0 )
          {
            v15 = v19;
            goto LABEL_23;
          }
        }
      }
    }
    v15 = v19;
    v16 = 0LL;
    v3 = 1;
    while ( (unsigned int)v16 < v20 )
    {
      v17 = (struct tagWND **)&v15[8 * v16];
      if ( !(unsigned int)ProtectWindowBitmap(*v17, a2) )
      {
        v3 = 0;
        if ( (a2 & 1) != 0 )
        {
          for ( ; (_DWORD)v16; LODWORD(v16) = v16 - 1 )
            ProtectWindowBitmap(*--v17, 0);
          break;
        }
      }
      v16 = (unsigned int)(v16 + 1);
    }
LABEL_23:
    FreeHwndList(v5, v6);
    if ( v15 )
      Win32FreePool(v15);
  }
  return v3;
}
