/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1401C49E0
 * Callers:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401A6804 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1401C4A14 (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(pv);
}
