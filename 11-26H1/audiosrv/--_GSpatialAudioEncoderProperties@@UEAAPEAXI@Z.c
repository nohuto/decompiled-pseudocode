/*
 * XREFs of ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x18006B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x1800B017C (--1SpatialAudioEncoderProperties@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::`scalar deleting destructor'(
        SpatialAudioEncoderProperties *this,
        char a2)
{
  SpatialAudioEncoderProperties::~SpatialAudioEncoderProperties(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x480);
  return this;
}
