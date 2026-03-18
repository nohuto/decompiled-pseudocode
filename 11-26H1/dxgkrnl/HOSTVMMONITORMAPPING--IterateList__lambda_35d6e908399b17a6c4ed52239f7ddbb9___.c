/*
 * XREFs of HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x140080D20
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int *v4; // rcx
  _QWORD *v5; // r9
  _BYTE *result; // rax

  v2 = *a1;
  while ( v2 != a1 )
  {
    v4 = *(unsigned int **)(a2 + 16);
    v5 = v2;
    v2 = (_QWORD *)*v2;
    result = (_BYTE *)*((_QWORD *)v4 + 2);
    if ( (_BYTE *)v5[4] == result )
    {
      ++**(_DWORD **)a2;
      result = (_BYTE *)*v4;
      if ( *((_DWORD *)v5 + 4) == (_DWORD)result )
      {
        result = (_BYTE *)v4[1];
        if ( *((_DWORD *)v5 + 5) == (_DWORD)result )
        {
          result = (_BYTE *)v4[2];
          if ( *((_DWORD *)v5 + 6) == (_DWORD)result )
          {
            result = (_BYTE *)*((_QWORD *)v4 + 4);
            if ( (_BYTE *)v5[6] == result )
            {
              result = *(_BYTE **)(a2 + 8);
              *result = 1;
            }
          }
        }
      }
    }
  }
  return result;
}
