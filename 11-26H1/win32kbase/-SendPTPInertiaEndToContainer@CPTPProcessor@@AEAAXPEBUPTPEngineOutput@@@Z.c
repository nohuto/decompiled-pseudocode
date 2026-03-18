/*
 * XREFs of ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x140218ECC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1402219A4 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CPTPProcessor::SendPTPInertiaEndToContainer(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v2; // r9
  void *v3; // rdx
  __int64 v4; // r10
  const struct CONTAINER_ID *v5; // [rsp+20h] [rbp-8h]

  if ( *((_DWORD *)a2 + 1) == 3 )
  {
    v2 = *((_QWORD *)this + 67);
    v3 = 0LL;
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 256) + 16LL);
    if ( v4 )
    {
      if ( v2 )
        v3 = *(void **)(v2 + 216);
      IVRootDeliver::Pointer::SendPTPInertiaInput(
        *(IVRootDeliver::Pointer **)(v4 + 16),
        v3,
        (unsigned int)-__CFSHR__(*(_DWORD *)(v4 + 168), 14),
        (_DWORD)this + 384,
        v5);
    }
  }
}
