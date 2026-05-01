/*
 * XREFs of ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x18016DEB4
 * Callers:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DDE84 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

bool __fastcall tson::write_buffer::push_back<enum tson::details::archive_marker>(tson::write_buffer *a1, _BYTE *a2)
{
  bool result; // al

  if ( *((_QWORD *)a1 + 259) < *((_QWORD *)a1 + 260) || (result = tson::write_buffer::reserve(a1, 1uLL)) )
  {
    result = 1;
    *(_BYTE *)(*((_QWORD *)a1 + 259))++ = *a2;
  }
  return result;
}
