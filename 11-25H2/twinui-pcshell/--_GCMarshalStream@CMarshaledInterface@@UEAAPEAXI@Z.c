/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800FE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ @ 0x1800FE9FC (--1CMarshalStream@CMarshaledInterface@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
