/*
 * XREFs of ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x140203630
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x14000EE84 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x14000F538 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?DestroyTable@MULTIFONT@@QEAAXXZ @ 0x14000F594 (-DestroyTable@MULTIFONT@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401BCFF0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall MulDestroyFont(struct _FONTOBJ *a1)
{
  __int64 ****v2; // r15
  int v3; // r14d
  __int64 **v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 ****v7; // [rsp+28h] [rbp-20h]
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1->pvConsumer )
  {
    MULTIFONT::MULTIFONT((MULTIFONT *)&v6, a1, 0xFFFFFFFF, 0LL);
    v2 = v7;
    v3 = *((_DWORD *)*v7 + 4);
    v4 = **v7;
    if ( v3 )
    {
      v5 = v6;
      do
      {
        --v3;
        v8 = v4[6];
        if ( v8[378] )
        {
          if ( v5 )
            *(_QWORD *)(v5 + 48) = v2[*((int *)v4 + 4) + 1];
          PDEVOBJ::DestroyFont((PDEVOBJ *)&v8, a1);
          if ( v5 )
            v2[*((int *)v4 + 4) + 1] = *(__int64 ****)(v5 + 48);
        }
        v4 = (__int64 **)*v4;
      }
      while ( v3 );
    }
    MULTIFONT::DestroyTable((MULTIFONT *)&v6);
    MULTIFONT::~MULTIFONT((MULTIFONT *)&v6);
  }
}
