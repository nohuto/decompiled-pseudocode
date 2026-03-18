/*
 * XREFs of ParseNameTail @ 0x140003020
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, char **a2, __int64 a3)
{
  __int64 v6; // r9
  char *v7; // r10
  char v8; // cl
  int v9; // esi
  _BYTE *v10; // rax
  _BYTE *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  char v16; // al
  __int64 result; // rax
  int v18; // r11d
  _BYTE *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  char *v22; // r9
  char v23; // al
  _BYTE *v24; // rax
  char *v25; // rax

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v7 = *a2;
  v8 = **a2;
  if ( v8 )
  {
    if ( v8 == 47 )
    {
      v25 = v7 + 1;
      v7 += 2;
      *a2 = v25;
      v9 = (unsigned __int8)*v25;
      *a2 = v7;
      goto LABEL_11;
    }
    if ( v8 == 46 )
    {
      ++v7;
      v9 = 2;
      *a2 = v7;
    }
    else
    {
      v9 = 1;
    }
    while ( (unsigned __int64)(unsigned int)v6 + 4 < 0x100 )
    {
      v11 = (_BYTE *)(a3 + (unsigned int)v6);
      v12 = 256 - v6;
      v13 = (unsigned int)(256 - v6);
      if ( (_DWORD)v6 != 256 )
      {
        if ( v12 > 0x7FFFFFFFuLL )
        {
          *v11 = 0;
        }
        else
        {
          v14 = 4LL - v12;
          v15 = v7 - v11;
          do
          {
            if ( !(v14 + v13) )
              break;
            v16 = v11[v15];
            if ( !v16 )
              break;
            *v11++ = v16;
            --v13;
          }
          while ( v13 );
          v10 = v11 - 1;
          if ( v13 )
            v10 = v11;
          *v10 = 0;
        }
      }
      v6 = (unsigned int)(v6 + 4);
      v7 = *a2 + 4;
      *a2 = v7;
      if ( --v9 && (v18 = v6 + 1, (unsigned int)(v6 + 1) < 0x100) )
      {
        v19 = (_BYTE *)(v6 + a3);
        v20 = (unsigned int)(256 - v6);
        if ( (_DWORD)v6 != 256 )
        {
          if ( v20 > 0x7FFFFFFF )
          {
            *v19 = 0;
          }
          else
          {
            v21 = 2147483646 - v20;
            v22 = (char *)("." - v19);
            do
            {
              if ( !(v21 + v20) )
                break;
              v23 = v19[(_QWORD)v22];
              if ( !v23 )
                break;
              *v19++ = v23;
              --v20;
            }
            while ( v20 );
            v24 = v19 - 1;
            if ( v20 )
              v24 = v19;
            *v24 = 0;
          }
        }
        v7 = *a2;
        LODWORD(v6) = v18;
      }
      else
      {
LABEL_11:
        if ( !v9 )
          return 0LL;
      }
    }
    LogError(3221225734LL);
    AcpiDiagTraceAmlError(a1, 3221225734LL);
    PrintDebugMessage(130, a3, 0, 0, 0LL);
    return 3221225734LL;
  }
  else
  {
    result = 0LL;
    *a2 = v7 + 1;
  }
  return result;
}
