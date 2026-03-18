/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x140065C80
 * Callers:
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1401AD958 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1402131E0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x140214E98 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x14023E038 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x140065DD0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx

  v4 = ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
  v5 = 0;
  if ( v4 < 0 )
  {
    return (unsigned int)v4;
  }
  else
  {
    RIMLockShared((__int64)this + 32);
    *(_OWORD *)a2 = *((_OWORD *)this + 7);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 8);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 9);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 10);
    CInputSink::UnlockAndRelease((CompositionInputObject *)((char *)this + 24));
  }
  return v5;
}
