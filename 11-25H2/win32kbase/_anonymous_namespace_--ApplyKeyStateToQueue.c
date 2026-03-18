/*
 * XREFs of _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1400C2C1C
 * Callers:
 *     UpdateKeyStateForMessage @ 0x1400C2A40 (UpdateKeyStateForMessage.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::ApplyKeyStateToQueue(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r11
  int v6; // ebx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 UserSessionState; // rax

  v3 = a2;
  if ( a3 )
  {
    v5 = (unsigned __int64)a2 >> 2;
    v6 = a2 & 3;
    v7 = *(unsigned __int8 *)(v5 + a1 + 256);
    if ( !_bittest(&v7, (unsigned __int8)(2 * v6)) )
    {
      v8 = 2 * v6 + 1;
      if ( _bittest(&v7, v8) )
        v9 = v7 & ~(1 << v8);
      else
        v9 = v7 | (1 << v8);
      *(_BYTE *)(v5 + a1 + 256) = v9;
    }
  }
  v10 = v3 >> 2;
  v11 = *(unsigned __int8 *)((v3 >> 2) + a1 + 256);
  if ( a3 )
    LODWORD(UserSessionState) = v11 | (1 << (2 * (v3 & 3)));
  else
    LODWORD(UserSessionState) = v11 & ~(1 << (2 * (v3 & 3)));
  *(_BYTE *)(v10 + a1 + 256) = UserSessionState;
  if ( (unsigned __int8)v3 < 0x20u )
  {
    UserSessionState = W32GetUserSessionState(v10, 2 * (unsigned int)(v3 & 3));
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 6984LL);
  }
  return UserSessionState;
}
