/*
 * XREFs of NVMeGetFeaturesCurrentCacheValueCompletion @ 0x140005780
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

unsigned __int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r9
  char v6; // cl
  _BYTE *v7; // rsi
  unsigned __int64 v8; // rdi
  int *v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  unsigned __int64 v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx

  result = GetSrbExtension(a2);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = 0LL;
  v8 = result;
  if ( v6 == 40 )
  {
    v9 = (int *)(v5 + 60);
    v10 = *(_QWORD *)(v5 + 64);
    if ( !*(_DWORD *)(v5 + 20) )
    {
      result = *(unsigned int *)(v5 + 56);
      v9 = (int *)(v5 + 60);
      if ( (_DWORD)result )
      {
        v11 = (unsigned int *)(v5 + 120);
        v12 = (unsigned int)result;
        v9 = (int *)(v5 + 60);
        do
        {
          result = *v11;
          if ( (unsigned int)result >= 0x80 && (unsigned int)result <= *(_DWORD *)(v5 + 16) )
          {
            v13 = v5 + result;
            result = (unsigned int)(*(_DWORD *)(v5 + result) - 64);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(result - 1);
              if ( (_DWORD)result )
              {
                if ( (_DWORD)result == 1 )
                {
                  result = *(unsigned int *)(v13 + 12);
                  v18 = (_BYTE *)(v13 + 32);
                  if ( !(_DWORD)result )
                    v18 = v7;
                  v7 = v18;
                }
              }
              else
              {
                result = *(unsigned __int8 *)(v13 + 10);
                v19 = (_BYTE *)(v13 + 24);
                if ( !(_BYTE)result )
                  v19 = v7;
                v7 = v19;
              }
            }
            else if ( *(_BYTE *)(v13 + 10) )
            {
              v7 = (_BYTE *)(v13 + 24);
            }
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v5 + 24);
    v9 = (int *)(v5 + 16);
    v10 = result;
    if ( !v6 )
    {
      v9 = (int *)(v5 + 16);
      if ( *(_BYTE *)(v5 + 10) )
      {
        v7 = (_BYTE *)(v5 + 72);
        v9 = (int *)(v5 + 16);
      }
    }
  }
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    if ( a3 )
    {
      v14 = *v7;
      v15 = 6LL;
      if ( *v7 != 26 )
        v15 = 10LL;
      *(_BYTE *)(v15 + v10) ^= (*(_BYTE *)(v15 + v10) ^ (4 * *a3)) & 4;
      result = (unsigned int)*v9;
      v16 = 24;
      v17 = 24LL;
      if ( v14 != 26 )
        v17 = 28LL;
      if ( result < v17 )
      {
        v16 = 16;
        if ( v14 != 26 )
          v16 = 20;
      }
      else if ( v14 != 26 )
      {
        v16 = 28;
      }
      *v9 = v16;
    }
    else
    {
      *(_BYTE *)(v5 + 3) = 4;
    }
  }
  *(_BYTE *)(v8 + 4225) |= 8u;
  return result;
}
