/*
 * XREFs of ?bShouldMap@@YAHPEAUFILEVIEW@@0@Z @ 0x1400CF714
 * Callers:
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1400CF638 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 * Callees:
 *     ?QueryIsFAT@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x14034DC78 (-QueryIsFAT@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 */

__int64 __fastcall bShouldMap(struct FILEVIEW *a1, struct FILEVIEW *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)a2 )
    goto LABEL_4;
  if ( *((_DWORD *)a2 + 6) == *((_DWORD *)a1 + 6) )
  {
    SessionState = W32GetSessionState(a1, a2, a3);
    v7 = *(_QWORD *)a1;
    v8 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == *(_QWORD *)a1 || *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 20360LL) )
      goto LABEL_4;
    v10 = v7 - v8;
    v11 = v8 - v7;
    if ( v10 >= 0 )
      v11 = v10;
    if ( v11 == 36000000000LL )
    {
      v13 = *((_QWORD *)a1 + 6);
      v12 = 0;
      if ( Gre::FileQueryObj::QueryIsFAT((Gre::FileQueryObj *)&v13, &v12) && v12 )
      {
LABEL_4:
        v3 = 1;
        if ( *((_BYTE *)a2 + 45) )
          return *((_BYTE *)a1 + 45) != 0;
      }
    }
  }
  return v3;
}
