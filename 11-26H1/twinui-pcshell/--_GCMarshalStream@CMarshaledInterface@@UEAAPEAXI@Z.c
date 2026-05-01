/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800EF890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ @ 0x1800EF8CC (--1CMarshalStream@CMarshaledInterface@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMarshaledInterface::CMarshalStream *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(
        CMarshaledInterface::CMarshalStream *this,
        char a2)
{
  CMarshaledInterface::CMarshalStream::~CMarshalStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
