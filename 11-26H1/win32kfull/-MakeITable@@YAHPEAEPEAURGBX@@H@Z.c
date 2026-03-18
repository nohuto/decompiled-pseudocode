/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x140157684
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x14015744C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1401575EC (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x140157898 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x140296F14 (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x1403237EC (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x140323844 (-MakeITableVGA@@YAHPEAE@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall MakeITable(Gre::Base *a1, struct RGBX *a2, int a3)
{
  int v3; // r15d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rbp
  struct Gre::Base::SESSION_GLOBALS *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r10
  unsigned int *v15; // rax
  int v16; // r8d
  unsigned int *v17; // r12
  struct RGBX *v19; // r9
  const void *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // [rsp+70h] [rbp+8h]
  HSEMAPHORE v23; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = (unsigned __int8 *)a1;
  v7 = (unsigned __int8 *)a1;
  if ( a2 )
  {
    v8 = Gre::Base::Globals(a1);
    SEMOBJ<13>::SEMOBJ<13>(&v23, v8);
    v12 = 1;
    v14 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
    v22 = v14;
    if ( v4 >= 20 )
    {
      v13 = 0LL;
      v19 = a2;
      while ( *(_DWORD *)v19 == *((_DWORD *)v8 + (unsigned int)v13 % 0x14 + 946) )
      {
        v13 = (unsigned int)(v13 + 1);
        v19 = (struct RGBX *)((char *)v19 + 4);
        if ( (int)v13 >= v4 )
        {
          if ( (_DWORD)v13 != v4 )
            break;
          v20 = *(const void **)(v14 + 20112);
          if ( v20 )
          {
            memmove(v6, v20, 0x8000uLL);
            goto LABEL_7;
          }
          v7 = (unsigned __int8 *)Win32AllocPool(0x8000LL, 1886221383LL, v13);
          v4 = 20;
          if ( !v7 )
            v7 = v6;
          break;
        }
      }
    }
    v15 = (unsigned int *)Win32AllocPool(0x20000LL, 1886221383LL, v13);
    v17 = v15;
    if ( v15 )
    {
      inv_cmap(v4, a2, v16, v15, v7);
      Win32FreePool(v17);
      v3 = 1;
      if ( v7 != v6 )
      {
        memmove(v6, v7, 0x8000uLL);
        *(_QWORD *)(v22 + 20112) = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    v12 = v3;
LABEL_7:
    SEMOBJ<13>::vUnlock(&v23);
    return v12;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono((unsigned __int8 *)a1);
    case 16:
      return MakeITableVGA((unsigned __int8 *)a1);
    case 20:
      MakeITableVGA((unsigned __int8 *)a1);
      v12 = 1;
      v21 = 0x8000LL;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v21;
      }
      while ( v21 );
      return v12;
    case 256:
      return MakeITable256((unsigned __int8 *)a1);
    default:
      return 0LL;
  }
}
