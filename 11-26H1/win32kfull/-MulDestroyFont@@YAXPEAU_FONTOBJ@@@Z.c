/*
 * XREFs of ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x14023D850
 * Callers:
 *     <none>
 * Callees:
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1400673DC (--1MULTIFONT@@QEAA@XZ.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x140067438 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ?DestroyTable@MULTIFONT@@QEAAXXZ @ 0x140067A18 (-DestroyTable@MULTIFONT@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall MulDestroyFont(struct _FONTOBJ *a1)
{
  __int64 v2; // r8
  __int64 ****v3; // r14
  int v4; // ebp
  __int64 **v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 ****v8; // [rsp+28h] [rbp-20h]
  __int64 *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( a1->pvConsumer )
  {
    MULTIFONT::MULTIFONT((MULTIFONT *)&v7, a1, 0xFFFFFFFF, 0LL);
    v3 = v8;
    v4 = *((_DWORD *)*v8 + 4);
    v5 = **v8;
    if ( v4 )
    {
      v6 = v7;
      do
      {
        --v4;
        v9 = v5[6];
        if ( v9[378] )
        {
          if ( v6 )
            *(_QWORD *)(v6 + 48) = v3[*((int *)v5 + 4) + 1];
          PDEVOBJ::DestroyFont((PDEVOBJ *)&v9, a1, v2);
          if ( v6 )
            v3[*((int *)v5 + 4) + 1] = *(__int64 ****)(v6 + 48);
        }
        v5 = (__int64 **)*v5;
      }
      while ( v4 );
    }
    MULTIFONT::DestroyTable((MULTIFONT *)&v7);
    MULTIFONT::~MULTIFONT((MULTIFONT *)&v7);
  }
}
