/*
 * XREFs of ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x14023A344
 * Callers:
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct _CLIPOBJ *__fastcall CaptureAndMungeCLIPOBJ(struct _CLIPOBJ *a1, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  BYTE v5; // r8
  int v6; // eax
  int v7; // eax
  LONG cx; // eax
  LONG cy; // ecx
  _BYTE v11[24]; // [rsp+30h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a1 )
  {
    GreProbeAndReadFromUntrustedVa(v11, 0x18uLL, a1, 0x18uLL, 1uLL);
    if ( a2 )
    {
      v5 = v11[20];
      if ( v11[20] )
      {
        if ( v11[20] != 1 )
          return 0LL;
        if ( a3 )
        {
          v6 = *(_DWORD *)&v11[4];
          if ( *(int *)&v11[4] < 0 )
            v6 = 0;
          *(_DWORD *)&v11[4] = v6;
          v7 = *(_DWORD *)&v11[8];
          if ( *(int *)&v11[8] < 0 )
            v7 = 0;
          *(_DWORD *)&v11[8] = v7;
          cx = *(_DWORD *)&v11[12];
          if ( a3->cx < *(int *)&v11[12] )
            cx = a3->cx;
          *(_DWORD *)&v11[12] = cx;
          cy = *(_DWORD *)&v11[16];
          if ( a3->cy < *(int *)&v11[16] )
            cy = a3->cy;
          *(_DWORD *)&v11[16] = cy;
        }
        a2->rclBounds = *(RECTL *)&v11[4];
      }
      a2->iDComplexity = v5;
    }
  }
  return a2;
}
