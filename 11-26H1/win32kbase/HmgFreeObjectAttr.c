/*
 * XREFs of HmgFreeObjectAttr @ 0x14000E3A0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140055690 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall HmgFreeObjectAttr(__int64 a1)
{
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v3; // rdi
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = GreGetCurrentThread();
  if ( a1 && result )
  {
    if ( !*((_QWORD *)result + 5) )
    {
      *((_QWORD *)result + 5) = a1;
      return result;
    }
    result = (struct _GRETHREAD *)PsGetCurrentProcessWin32Process();
    v3 = result;
    if ( result )
    {
      if ( *(_QWORD *)result )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v8);
        v4 = (char *)v3 + 208;
        v5 = *((_QWORD *)v3 + 26);
        if ( (struct _GRETHREAD *)v5 == (struct _GRETHREAD *)((char *)v3 + 208) || *(_DWORD *)(v5 + 16) == 170 )
        {
          v5 = PALLOCNOZ(1384LL, 1717658183LL);
          if ( !v5 )
            return (struct _GRETHREAD *)SEMOBJ<20>::vUnlock(&v8);
          v7 = *(_QWORD *)v4;
          if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
            __fastfail(3u);
          *(_QWORD *)v5 = v7;
          *(_QWORD *)(v5 + 8) = v4;
          *(_QWORD *)(v7 + 8) = v5;
          *(_QWORD *)v4 = v5;
          *(_DWORD *)(v5 + 16) = 0;
        }
        v6 = *(unsigned int *)(v5 + 16);
        *(_DWORD *)(v5 + 16) = v6 + 1;
        *(_QWORD *)(v5 + 8 * v6 + 24) = a1;
        *((_QWORD *)v3 + 6) = a1;
        return (struct _GRETHREAD *)SEMOBJ<20>::vUnlock(&v8);
      }
    }
  }
  return result;
}
