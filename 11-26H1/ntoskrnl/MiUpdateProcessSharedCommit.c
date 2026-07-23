/*
 * XREFs of MiUpdateProcessSharedCommit @ 0x14099AEC8
 * Callers:
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140447760 (MiIncludeSharedCommit.c)
 */

__int64 __fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r9
  unsigned __int64 v3; // r10
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rcx

  result = MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    result = *v2;
    v4 = 0LL;
    for ( i = *(_QWORD **)(*v2 + 72); i; i = (_QWORD *)*i )
      v4 = i;
    while ( v4 )
    {
      v6 = v4[3];
      if ( (v6 & 1) != 0 )
        v7 = (volatile signed __int64 *)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 1568);
      else
        v7 = (volatile signed __int64 *)(v6 + 1704);
      _InterlockedAdd64(v7, v3);
      v8 = (__int64 **)v4[1];
      result = (__int64)v4;
      if ( v8 )
      {
        v4 = (_QWORD *)v4[1];
        v9 = *v8;
        if ( v9 )
        {
          do
          {
            result = *v9;
            v4 = v9;
            v9 = (__int64 *)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || *v4 == result )
            break;
          result = (__int64)v4;
        }
      }
    }
  }
  return result;
}
