/*
 * XREFs of VidSchiMarkDevicesInError @ 0x14009A454
 * Callers:
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 */

_UNKNOWN **__fastcall VidSchiMarkDevicesInError(__int64 *a1, _BYTE *a2, __int64 *a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbp
  unsigned int v6; // ebx
  __int64 v9; // r12
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a1;
  v6 = *((_DWORD *)a1 + 12);
  *a2 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  while ( v6 != *((_DWORD *)a1 + 13) )
  {
    result = (_UNKNOWN **)v6;
    v10 = *(_QWORD *)(v4 + 8LL * v6 + 1440);
    v11 = *(_DWORD *)(v10 + 88);
    if ( v11 != 3 )
    {
      result = (_UNKNOWN **)a1[5];
      if ( *(_QWORD *)(v10 + 104) > (unsigned __int64)result )
        return result;
      if ( v11 )
      {
        if ( v11 == 1 )
          goto LABEL_13;
      }
      else
      {
        result = *(_UNKNOWN ***)(v10 + 48);
        v12 = (__int64)result[13];
        if ( !*(_BYTE *)(v12 + 212) )
        {
          if ( *(_QWORD *)(v9 + 3272) == v4 && !*a3 )
          {
            v13 = *(_QWORD *)(v12 + 48);
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 8) )
                *a3 = v12;
            }
          }
          *(_BYTE *)(v12 + 212) = 1;
          VidSchMarkDeviceAsError(v12, 7);
          result = (_UNKNOWN **)*(unsigned int *)(v12 + 56);
          if ( ((unsigned __int8)result & 8) != 0 )
          {
LABEL_13:
            *a2 = 1;
            return result;
          }
        }
      }
    }
    v6 = ((_BYTE)v6 + 1) & 0xF;
  }
  return result;
}
