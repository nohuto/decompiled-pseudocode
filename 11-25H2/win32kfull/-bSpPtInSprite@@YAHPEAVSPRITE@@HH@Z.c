/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14032BCD8
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x14032A2C0 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, LONG a3)
{
  unsigned int v3; // edi
  __int64 *v8; // rbx
  struct _SURFOBJ *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  _DWORD *pvScan0; // r14
  struct _POINTL v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  struct _SPRITESTATE *v17[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v18; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v16 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v16);
  v9 = (struct _SURFOBJ *)v8[129];
  v18.right = a2 + 1;
  v18.bottom = a3 + 1;
  v10 = *((_QWORD *)a1 + 2);
  v18.left = a2;
  v18.top = a3;
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 104LL);
  if ( (*(_DWORD *)(v11 + 24) & 2) != 0 )
    v12 = **(_DWORD **)(v11 + 112) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 8LL);
  else
    v12 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v18) )
  {
    v15.x = -a2;
    v15.y = -a3;
    pvScan0 = v9->pvScan0;
    *pvScan0 = 0;
    vSpComposite(a1, &v15, v9, &v18);
    if ( (v12 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v15, v9, &v18);
      LOBYTE(v3) = (v12 & *pvScan0) != v12;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v17, v13);
  return v3;
}
