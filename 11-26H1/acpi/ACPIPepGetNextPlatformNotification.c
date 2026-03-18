/*
 * XREFs of ACPIPepGetNextPlatformNotification @ 0x1400D2428
 * Callers:
 *     ACPIPepWorker @ 0x1400B4B70 (ACPIPepWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIPepGetNextPlatformNotification(__int64 a1, _DWORD *a2, bool *a3)
{
  int *v3; // rax
  bool v4; // zf
  char v6; // cl
  int v7; // r11d
  int v8; // r10d
  int v9; // eax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d

  v3 = (int *)(a1 + 252);
  v4 = *(_BYTE *)(a1 + 256) == 0;
  *a2 = -1;
  if ( v4 || (v4 = *v3 == 0, *(_BYTE *)(a1 + 256) = 0, v4) )
  {
    v7 = *v3;
    v8 = *(_DWORD *)(a1 + 248);
    if ( v8 == *v3 )
    {
      return 0;
    }
    else
    {
      v6 = 1;
      v9 = 1;
      if ( v8 >= v7 )
        v9 = -1;
      *(_DWORD *)(a1 + 248) = v8 + v9;
      *a3 = v8 < v7;
      v10 = v8 + 1;
      if ( v8 >= v7 )
        v10 = v8;
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            *a2 = 0;
          else
            *a2 = -1;
        }
        else
        {
          *a2 = 2;
        }
      }
      else
      {
        *a2 = 1;
      }
    }
  }
  else
  {
    v6 = 1;
    *a2 = 3;
    *a3 = 1;
  }
  return v6;
}
