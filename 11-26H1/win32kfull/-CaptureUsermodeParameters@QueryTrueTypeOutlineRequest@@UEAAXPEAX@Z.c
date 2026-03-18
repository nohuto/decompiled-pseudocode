/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x140285260
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140284564 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(QueryTrueTypeOutlineRequest *this, char *a2)
{
  int v4; // r8d
  void *v5; // rcx
  unsigned int v6; // r10d
  unsigned int v7; // edx
  unsigned int *v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r11d
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  void *Src; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  _OWORD *v17; // [rsp+70h] [rbp+18h] BYREF
  struct _FONTOBJ *v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v16 = 0;
  GreProbeAndReadFromUntrustedVa(&v18, 8uLL, a2 + 8, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v17, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&Src, 8uLL, a2 + 40, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v16, 4uLL, a2 + 48, 4uLL, 1uLL);
  if ( v18 == *((struct _FONTOBJ **)this + 12) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 6), v18) )
    {
      v4 = v16;
      if ( v16 >= 0 && Src == *((void **)this + 14) )
      {
        v5 = (void *)*((_QWORD *)this + 10);
        if ( v5 && v16 > 0 )
        {
          memmove(v5, Src, *((unsigned int *)this + 18));
          v6 = *((_DWORD *)this + 18);
          v4 = v16;
          if ( v16 < v6 )
            v6 = v16;
          v7 = 0;
LABEL_10:
          if ( v7 + 16 >= v7 && v7 + 16 <= v6 )
          {
            v8 = (unsigned int *)(*((_QWORD *)this + 10) + v7);
            v9 = *v8;
            if ( *v8 >= 0x10 && v6 - v7 >= v9 )
            {
              v10 = 16;
              while ( v10 + 12 >= v10 )
              {
                if ( v9 < v10 + 12 )
                  break;
                v11 = 8 * *(unsigned __int16 *)((char *)v8 + v10 + 2);
                v12 = v11 + 4;
                if ( v11 + 4 < v11 || v9 - v10 < v12 )
                  break;
                v10 += v12;
                if ( v10 >= v9 )
                {
                  v7 += v9;
                  if ( v7 < v6 )
                    goto LABEL_10;
                  goto LABEL_21;
                }
              }
            }
          }
        }
        else
        {
LABEL_21:
          v13 = (_OWORD *)*((_QWORD *)this + 8);
          if ( v13 )
          {
            v14 = v17;
            if ( v17 != *((_OWORD **)this + 13) )
              return;
            *v13 = *v17;
            v13[1] = v14[1];
            v13[2] = v14[2];
            v13[3] = v14[3];
            v4 = v16;
          }
          else if ( v17 )
          {
            return;
          }
          *((_DWORD *)this + 22) = v4;
        }
      }
    }
  }
}
