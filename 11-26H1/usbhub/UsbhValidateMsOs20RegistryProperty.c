/*
 * XREFs of UsbhValidateMsOs20RegistryProperty @ 0x14005C4D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 */

char __fastcall UsbhValidateMsOs20RegistryProperty(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rcx

  v3 = *a3;
  v4 = a1;
  if ( (unsigned int)v3 >= 0xD )
  {
    v5 = a3[3];
    if ( v3 < v5 + 11 )
    {
      v6 = 1448235058;
      goto LABEL_17;
    }
    if ( !(_WORD)v5 || (v5 & 1) != 0 )
    {
      v6 = 1448235059;
      goto LABEL_17;
    }
    v7 = *(unsigned __int16 *)((char *)a3 + v5 + 8);
    if ( v3 >= v7 + v5 + 10 )
    {
      if ( (_WORD)v7 )
      {
        v5 = a3[2];
        if ( (unsigned __int16)(v5 - 1) <= 6u )
        {
          *a2 |= 0x40u;
          return 1;
        }
        v6 = 1448235062;
        goto LABEL_10;
      }
      v6 = 1448235061;
    }
    else
    {
      v6 = 1448235060;
    }
    v5 = v7;
LABEL_10:
    a1 = v4;
    goto LABEL_17;
  }
  v5 = *a3;
  v6 = 1448235057;
LABEL_17:
  Log(a1, 256, v6, v5, 0LL);
  return 0;
}
