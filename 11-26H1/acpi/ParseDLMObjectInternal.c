/*
 * XREFs of ParseDLMObjectInternal @ 0x14006E4EC
 * Callers:
 *     PerformDLMObjectBindings @ 0x14006E6BC (PerformDLMObjectBindings.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  char v5; // r15
  unsigned int v8; // edi
  unsigned int NameSpaceObject; // eax
  __int64 v10; // r13
  __int64 v11; // rbx
  __int16 v12; // ax
  int v13; // eax
  _QWORD *v15; // [rsp+20h] [rbp-E0h]
  __int128 v16; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-C8h]
  signed __int64 v18; // [rsp+48h] [rbp-B8h]
  __int64 v19; // [rsp+150h] [rbp+50h] BYREF
  __int64 v20; // [rsp+160h] [rbp+60h] BYREF

  v4 = 0LL;
  v15 = (_QWORD *)gpheapGlobal;
  v20 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, &v19, 0);
  v10 = v19;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
  {
    v11 = 0LL;
    if ( NameSpaceObject == -1072431089 )
      goto LABEL_20;
  }
  else
  {
    v11 = *(_QWORD *)(v19 + 96);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 0, 0) )
    {
      if ( !a4 )
        goto LABEL_21;
      v12 = *(_WORD *)(a4 + 2);
      if ( v12 == 3 )
        goto LABEL_12;
      if ( v12 == 2 )
      {
        v13 = GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, &v20, 0);
        v4 = v20;
        if ( !v13 )
        {
          a4 = v20 + 64;
          if ( *(_WORD *)(v20 + 66) == 3 )
          {
            if ( v20 != -64 )
            {
LABEL_12:
              if ( !(unsigned int)DupObjData(v15, (__int64)&v16, a4) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 72), v18, 0LL) )
                {
                  v5 = 1;
                }
                else
                {
                  *(_OWORD *)(v11 + 40) = v16;
                  *(_OWORD *)(v11 + 56) = v17;
                  *(_QWORD *)(v11 + 72) = v18;
                  _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 2, 0);
                }
              }
              goto LABEL_22;
            }
LABEL_21:
            _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 1, 0);
LABEL_22:
            v8 = 0;
LABEL_23:
            if ( v5 )
              FreeDataBuffs((__int64)&v16, 1u);
            goto LABEL_25;
          }
        }
        v8 = -1072431089;
      }
      else
      {
        v8 = -1072431089;
      }
LABEL_20:
      if ( !v11 )
        goto LABEL_23;
      goto LABEL_21;
    }
  }
LABEL_25:
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v4 )
    DereferenceObjectEx(v4);
  return v8;
}
