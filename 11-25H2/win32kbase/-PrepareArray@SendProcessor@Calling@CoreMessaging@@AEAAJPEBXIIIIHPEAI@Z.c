/*
 * XREFs of ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400FCD28
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400FE190 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400FE190 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?SafeStrLen@@YAJPEBGPEAI@Z @ 0x14015D860 (-SafeStrLen@@YAJPEBGPEAI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareArray(
        CoreMessaging::Calling::SendProcessor *this,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rdi
  unsigned int v12; // ebx
  _BYTE *v13; // rax
  unsigned int v14; // r10d
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned int v18; // eax
  __int64 v19; // r8
  const unsigned __int16 *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 result; // rax

  v8 = a8;
  *a8 = 0;
  if ( a2 || !a3 )
  {
    v12 = a5;
    v13 = (_BYTE *)*((_QWORD *)this + 1);
    if ( !a7 )
      v12 = a3;
    if ( *v13 == 13 )
    {
      v14 = 0;
      *((_QWORD *)this + 1) = v13 + 1;
      if ( v12 )
      {
        v16 = 0LL;
        v17 = 0xFFFFFFFFLL;
        while ( (unsigned int)v16 < v12 )
        {
          v18 = 0;
          v19 = (unsigned int)v16;
          LODWORD(a8) = 0;
          if ( a7 )
          {
            v18 = a4;
          }
          else
          {
            v20 = (const unsigned __int16 *)a2[v16];
            if ( v20 )
            {
              if ( (int)SafeStrLen(v20, (unsigned int *)&a8) < 0 )
                goto LABEL_26;
              v18 = (unsigned int)a8;
            }
          }
          if ( a2[v19] || a7 )
          {
            v21 = 2LL * (v18 + 1);
            if ( v21 > v17 || v14 + (((_DWORD)v21 + 3) & 0xFFFFFFFC) < v14 )
              goto LABEL_26;
            v14 += (v21 + 3) & 0xFFFFFFFC;
          }
          v16 = (unsigned int)(v16 + 1);
        }
        LODWORD(v15) = v14 + 8 * v12 + 4;
      }
      else
      {
        LODWORD(v15) = 0;
      }
LABEL_25:
      *v8 = v15;
      return 0LL;
    }
    LODWORD(a8) = 0;
    result = CoreMessaging::Calling::SendProcessor::ReadParameterSize(this, 0LL, 1, a4, a5, a6, (unsigned int *)&a8);
    if ( (int)result < 0 )
      return result;
    v15 = (unsigned int)a8 * (unsigned __int64)v12;
    if ( is_mul_ok((unsigned int)a8, v12) && v15 <= 0xFFFFFFFF )
      goto LABEL_25;
  }
LABEL_26:
  *((_DWORD *)this + 30) = 7;
  return 2147942487LL;
}
