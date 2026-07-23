/*
 * XREFs of RtlpHpVsContextGetSlotInfo @ 0x1800E09A0
 * Callers:
 *     RtlpHpVsContextCompact @ 0x180061C90 (RtlpHpVsContextCompact.c)
 *     RtlpHpVsContextLockUnlock @ 0x180071A28 (RtlpHpVsContextLockUnlock.c)
 *     RtlpHpVsContextCleanup @ 0x1800E0604 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsContextHandleContention @ 0x1800E0854 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsContextGetSlotInfo(unsigned __int16 *a1, _WORD *a2)
{
  __int64 v2; // r8
  unsigned __int16 *v3; // r9
  unsigned __int16 *i; // r11
  unsigned __int16 v5; // r10
  __int64 v6; // rax
  _WORD *v8; // rcx

  v2 = 0LL;
  v3 = &a1[32 * (unsigned __int64)*a1];
  for ( i = &v3[2 * *((unsigned __int8 *)a1 + 2) + 2]; v3 < i; v3 += 2 )
  {
    v5 = *v3;
    v6 = 0LL;
    if ( (_DWORD)v2 )
    {
      v8 = a2;
      while ( *v8 != v5 )
      {
        v6 = (unsigned int)(v6 + 1);
        v8 += 2;
        if ( (unsigned int)v6 >= (unsigned int)v2 )
          goto LABEL_3;
      }
      ++a2[2 * v6 + 1];
    }
    else
    {
LABEL_3:
      a2[2 * v2] = v5;
      a2[2 * v2 + 1] = 1;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v2;
}
