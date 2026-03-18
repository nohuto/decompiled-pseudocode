/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14006EF5C
 * Callers:
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1401CFA98 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x14021A904 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x140248740 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  NTSTATUS v4; // edi

  v4 = ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    RIMLockShared((char *)this + 32);
    v4 = 0;
    *(_OWORD *)a2 = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 9);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 10);
    CInputSink::UnlockAndRelease((CompositionInputObject *)((char *)this + 24));
  }
  return (unsigned int)v4;
}
