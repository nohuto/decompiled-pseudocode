/*
 * XREFs of MiInitializeChannelOrdering @ 0x14087C32C
 * Callers:
 *     MiInitializeNuma @ 0x1406E7EDC (MiInitializeNuma.c)
 * Callees:
 *     MiInitializeSystemChannelOrdering @ 0x140D031BC (MiInitializeSystemChannelOrdering.c)
 */

__int64 __fastcall MiInitializeChannelOrdering(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( qword_140E2D868 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 56320LL * (unsigned int)a2;
    if ( (unsigned __int8)byte_140E2D898 > 1u )
      *(_DWORD *)(v3 + v2 + 14096) |= 1u;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      return MiInitializeSystemChannelOrdering(a1, a2, v3, v2);
    }
    else
    {
      v5 = qword_140E37E50;
      *(_WORD *)(v3 + v2 + 14149) = *(_WORD *)(v3 + qword_140E37E50 + 14149);
      *(_WORD *)(v3 + v2 + 14145) = *(_WORD *)(v3 + v5 + 14145);
      result = *(unsigned __int16 *)(v3 + v5 + 14147);
      *(_WORD *)(v3 + v2 + 14147) = result;
    }
  }
  return result;
}
