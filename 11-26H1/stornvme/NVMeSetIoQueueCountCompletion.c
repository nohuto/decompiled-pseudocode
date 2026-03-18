/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x14002A8A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 SrbExtension; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _BYTE *v8; // rsi
  unsigned __int16 v9; // ax
  unsigned int v10; // r10d
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  _WORD *v14; // r11
  unsigned int v15; // r11d
  int v16; // ecx
  int v17; // ebp
  unsigned int v18; // ecx
  unsigned __int16 *v19; // rcx
  unsigned __int16 v20; // ax
  unsigned __int16 *v21; // rcx
  int v22; // eax
  unsigned int v23; // edx

  SrbExtension = GetSrbExtension(a2);
  if ( !a3 || (LOBYTE(v7) = *(_BYTE *)(v5 + 3), (_BYTE)v7 == 14) )
  {
    v7 = *(_QWORD *)(v6 + 1104);
    *(_QWORD *)(v7 + 4200) = 0LL;
  }
  else
  {
    v8 = (_BYTE *)(v6 + 20);
    if ( (_BYTE)v7 != 1 || *v8 )
    {
      v12 = 1;
      v11 = 1;
    }
    else
    {
      v9 = *(_WORD *)(v6 + 272);
      v10 = *(_DWORD *)(v6 + 124);
      v11 = v9 - 1;
      v12 = 2 * *(_WORD *)(v6 + 234);
      *(_WORD *)(v6 + 1004) = *(_WORD *)(v6 + 978);
      if ( v9 <= 1u )
        v11 = 1;
      *(_WORD *)(v6 + 1006) = *(_WORD *)(v6 + 980);
      *(_WORD *)(v6 + 978) = *a3 + 1;
      *(_WORD *)(v6 + 980) = a3[1] + 1;
      v13 = *a3 + 1;
      if ( v10 )
      {
        if ( v13 < v10 + v12 )
        {
          v15 = (unsigned __int16)*(_DWORD *)a3 + 1;
          v16 = *(_DWORD *)a3 + 1;
          if ( v15 >= v10 )
            LOWORD(v16) = v10;
          if ( (unsigned __int16)*(_DWORD *)a3 )
          {
            if ( (unsigned __int16)v16 == v15 )
              LOWORD(v16) = v16 - 1;
          }
          else
          {
            LOWORD(v16) = 0;
          }
          v14 = (_WORD *)(v6 + 982);
          *(_WORD *)(v6 + 982) = v16;
          if ( (unsigned __int16)(*a3 - v16 + 1) < v12 )
            v12 = *a3 - v16 + 1;
        }
        else
        {
          if ( v13 < v12 )
            v12 = *a3 + 1;
          v14 = (_WORD *)(v6 + 982);
          *(_WORD *)(v6 + 982) = v10;
        }
        v17 = (unsigned __int16)a3[1];
        v18 = (unsigned __int16)(v17 + 1);
        if ( v18 < v10 + v11 )
        {
          if ( v17 + 1 < v10 )
            LOWORD(v10) = v17 + 1;
          if ( a3[1] )
          {
            if ( (unsigned __int16)v10 == v17 + 1 )
              LOWORD(v10) = v10 - 1;
          }
          else
          {
            LOWORD(v10) = 0;
          }
          *v14 = v10;
          LOWORD(v7) = a3[1] - v10 + 1;
          if ( (unsigned __int16)v7 < v11 )
            v11 = a3[1] - v10 + 1;
        }
        else
        {
          LOWORD(v7) = *(_WORD *)(v6 + 124);
          *v14 = v7;
          if ( (unsigned __int16)v18 < v11 )
            v11 = v17 + 1;
        }
      }
      else
      {
        if ( v13 >= v12 )
          v13 = v12;
        v12 = v13;
        LOWORD(v7) = a3[1] + 1;
        if ( (unsigned __int16)v7 < v11 )
          v11 = a3[1] + 1;
      }
      if ( (*(_DWORD *)(v6 + 4064) & 0x10000) != 0 )
      {
        LODWORD(v7) = *(_DWORD *)(v6 + 4344);
        if ( (v7 & 2) != 0 )
        {
          v19 = *(unsigned __int16 **)(v6 + 4352);
          if ( *v19 && v12 >= *v19 )
            v12 = *v19;
          LOWORD(v7) = v19[1];
          if ( (_WORD)v7 && v11 >= (unsigned __int16)v7 )
            v11 = v19[1];
        }
      }
    }
    if ( !*v8 )
    {
      v20 = *(_WORD *)(v6 + 40);
      if ( v20 && v12 >= v20 )
        v12 = *(_WORD *)(v6 + 40);
      LOWORD(v7) = *(_WORD *)(v6 + 42);
      if ( (_WORD)v7 && v11 >= (unsigned __int16)v7 )
        v11 = *(_WORD *)(v6 + 42);
      if ( v11 > v12 )
        v11 = v12;
    }
    v21 = (unsigned __int16 *)(v6 + 332);
    if ( *(_QWORD *)(SrbExtension + 4200) )
    {
      if ( v12 >= *(_WORD *)(v6 + 330) )
        v12 = *(_WORD *)(v6 + 330);
      LOWORD(v7) = *v21;
      if ( v11 >= *v21 )
        v11 = *v21;
    }
    *(_WORD *)(v6 + 330) = v12;
    *v21 = v11;
    if ( !*(_BYTE *)(v6 + 20) && *(_BYTE *)(v6 + 3752) )
    {
      v22 = *(_DWORD *)(v6 + 3764);
      v23 = *(_DWORD *)(v6 + 3756) * (unsigned int)v11 / 0x64;
      *(_WORD *)(v6 + 334) = v23;
      if ( (v22 & 0x80u) == 0 )
      {
        LOWORD(v7) = v23;
        if ( v11 && (_WORD)v23 == v11 )
        {
          LOWORD(v7) = v23 - 1;
          *(_WORD *)(v6 + 334) = v23 - 1;
        }
      }
      else
      {
        *(_WORD *)(v6 + 334) = v11;
        LOWORD(v7) = v11;
      }
      if ( (_WORD)v7 )
        *(_WORD *)(v6 + 330) = v11;
      else
        *(_BYTE *)(v6 + 3752) = 0;
    }
    *(_QWORD *)(SrbExtension + 4200) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  return v7;
}
