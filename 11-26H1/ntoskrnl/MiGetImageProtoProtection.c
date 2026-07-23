/*
 * XREFs of MiGetImageProtoProtection @ 0x14042EA80
 * Callers:
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetImageProtoProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 i; // r8
  __int64 result; // rax
  unsigned int SessionId; // eax

  v2 = *(_QWORD *)(a1 + 80);
  for ( i = 0LL; v2; v2 = *(_QWORD *)(v2 + 16) )
  {
    if ( (*(_DWORD *)(v2 + 32) & 0x20000) != 0
      && (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 8) != 0
      && (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 0x20) != 0 )
    {
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      i = *(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v2, SessionId, v2) + 72);
    }
    else
    {
      i = *(_QWORD *)(v2 + 8);
    }
    if ( a2 >= i && a2 < i + 8LL * *(unsigned int *)(v2 + 44) )
      break;
  }
  if ( a2 >= i + 8LL * (unsigned int)(*(_DWORD *)(v2 + 44) - *(_DWORD *)(v2 + 52)) )
    return 0LL;
  result = (*(_DWORD *)(a1 + 48) >> 5) & 0x1F;
  if ( (_DWORD)result == 7 )
    return (*(_DWORD *)(v2 + 32) >> 1) & 0x1F;
  return result;
}
