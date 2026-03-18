/*
 * XREFs of OffsetChildren @ 0x14005B830
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     OffsetWindow @ 0x14005B9D0 (OffsetWindow.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401B18A0 (ScaleDpiOffsetWithSubpixel.c)
 */

void __fastcall OffsetChildren(struct tagWND *a1, int a2, int a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rcx
  float *v14; // rdx
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+24h] [rbp-44h]
  __int128 v18; // [rsp+28h] [rbp-40h] BYREF
  int v19; // [rsp+70h] [rbp+8h]

  v18 = 0LL;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    DirtyVisRgnTrackers(a1, v8);
  v9 = *((_QWORD *)a1 + 14);
  if ( v9 )
  {
    v10 = 0;
    v19 = a3;
    v11 = a2;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(&v18, a4, (int *)(*(_QWORD *)(v9 + 40) + 88LL)) )
        goto LABEL_18;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_QWORD *)(v9 + 40);
      if ( *(_QWORD *)(v13 + 256) == *(_QWORD *)(v12 + 256) )
      {
        v14 = (float *)(v9 + 224);
        if ( (((unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v13 + 288) >> 8)) & 0x1FF) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( (*(_DWORD *)(v13 + 288) & 0xF) == 2 && (*(_DWORD *)(v12 + 288) & 0xF) == 2 )
        {
          v14 = (float *)(v9 + 224);
LABEL_9:
          *v14 = *((float *)a1 + 56);
          *(_DWORD *)(v9 + 228) = *((_DWORD *)a1 + 57);
          goto LABEL_10;
        }
        v14 = (float *)(v9 + 224);
      }
      v16 = a2;
      v17 = a3;
      ScaleDpiOffsetWithSubpixel(&v16, v14, (struct tagWND *)v9, a1);
      a2 = v16;
      v10 = 1;
      a3 = v17;
LABEL_10:
      OffsetWindow((tagWND *)v9);
      if ( v10 )
      {
        a3 = v19;
        a2 = v11;
      }
      v15 = *(_QWORD *)(v9 + 112);
      v10 = 0;
      if ( !v15 )
      {
LABEL_18:
        while ( 1 )
        {
          v15 = *(_QWORD *)(v9 + 88);
          if ( v15 )
            break;
          v9 = *(_QWORD *)(v9 + 104);
          if ( (struct tagWND *)v9 == a1 )
            return;
        }
      }
      v9 = v15;
    }
  }
}
